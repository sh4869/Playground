var gulp = require('gulp');
var babel = require('gulp-babel');
var run = require('gulp-run');
var runSequence = require('run-sequence');

gulp.task('babel',function(){
  return gulp.src(['es6/*.js', 'es6/**/*.js'])
      .pipe(babel())
      .pipe(gulp.dest('out'));
});

gulp.task('ddc',function(){
  return run('dartdevc -o es6 web/index.html').exec();
})

gulp.task('default',function(callback){
  return runSequence('ddc','babel',callback);
});
