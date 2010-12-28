require 'rake/clean'

APPLICATIONS = %w(
  0-basics-caller
  1-count-test
  2-getnth-test
  3-deletelist-test
  4-pop-test
  5-insertnth-test
  6-sortedinsert-test
  7-insertsort-test
  8-append-test
  9-frontbacksplit-test
  10-removeduplicates-test
  11-movenode-test
  12-alternatingsplit-test
  13-shufflemerge-test
  14-sortedmerge-test
  15-mergesort-test
  16-sortedintersect-test
  17-reverse-test
  18-recursivereverse-test
)
CLEAN.include(APPLICATIONS)
CLEAN.include("src/linked-list-application.o")
CLOBBER.include("src/linked-list-application.o")

task "linked-list-problems" do
  sh "gcc -g -c -o src/linked-list-problems.o src/linked-list-problems.c"
end

APPLICATIONS.each do |application|
  desc "Build #{application}"
  task application => "linked-list-problems" do
    sh "gcc -g -o #{application} src/#{application}.c src/linked-list-problems.o"
  end
end

desc "Build All Applications"
task :all do
  APPLICATIONS.each do |application|
    Rake::Task[application].invoke
  end
end