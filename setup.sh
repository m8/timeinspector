install_r2() 
{
    echo "Installing radare2"

    git clone https://github.com/radareorg/radare2   
    pushd radare2
    
    git checkout 34ce17da6f7cd3950565605ccd9035196e323924
    ./sys/install.sh
    
    popd
}

install_python_requirements()
{
    echo "Installing python requirements"
    pip install -r requirements.txt
}

install_r2
install_python_requirements