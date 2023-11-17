<?php
// Online PHP compiler to run PHP program online
// Print "Hello World!" message
class CreateStack {
    public $top;
    public $stack = array();

     function __construct(){
        $this->top = -1;
    }
    

    public function isEmpty(){
        if($this->top ==0){
            return true;
        } else {
            return false;
        }
    }

    public function push($data){
        if($this->top == count($this->stack)){
            echo "stack is full";
        }
        else{
            $this->top ++;
            $this->stack[$this->top] = $data;
        }
    }

    public function pop(){
        if($this->isEmpty()){
            echo "stack is empty";
        }

        else{
            $data = $this->stack[$this->top];
            $this->top --;
            return $data;

        }
    }

    public function peek (){


        if($this->isEmpty()){
            echo "stack is empty";
        }

        else{
            $data = $this->stack[$this->top];
            return $data;
        }


    }

};


$stack = new CreateStack();

$stack->push(10);
$stack->push(20);

echo $stack->peek();
?>
