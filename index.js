const fs = require('fs');

fs.readdirSync(__dirname).forEach(file => {
    const subfile = `${__dirname}/${file}`;
    if (fs.lstatSync(subfile).isDirectory()) {
        fs.readdirSync(subfile).forEach(subsubfile => {
            let newFileName = file.split('-');
            const extension = subsubfile.split('.').pop();
            newFileName.shift();
            newFileName=newFileName.join("-");
            newFileName+="."+extension;
            fs.rename(`${subfile}/${subsubfile}`, `${subfile}/${newFileName}`, (err) => {
                if (err) throw err;
                console.log(newFileName);
            })
        });
    }
});