class CreateQ{

    public $queue;

    public function __construct(){
        $this->queue= [];
    }

    public function enqueue($data){

        
        array_push($this->queue , $data);
    }

    public function dequeue(){
        if(!$this->isEmpty()){
            array_shift($this->queue);
        }
    }
    public function peek(){

        if(!$this->isEmpty()){
            return $this->queue[0];
        }
    }
    public function isEmpty(){
       return empty($this->queue);
    }
}
