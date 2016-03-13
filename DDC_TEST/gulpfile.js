var gulp = require('gulp');
var babel = require('gulp-babel');

gulp.task('babel',function(){
  return gulp.src(['out/*.js', 'out/**/*.js'])
      .pipe(babel())
      .pipe(gulp.dest('dist'));
})

gulp.task('default',['babel'];
