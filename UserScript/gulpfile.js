var gulp = require('gulp'),
    typescript = require('gulp-typescript'),
    tsProject  = typescript.createProject('tsconfig.json');

gulp.task('default',['build']);

gulp.task('build',function(){
    var tsResult = tsProject.src("src/**/*.ts",{base:'src'})
        .pipe(typescript(tsProject));
    return tsResult.js.pipe(gulp.dest("src"));
});

gulp.task('watch', function () {
    gulp.watch('src/**/*.ts',['build']);
});