#define _BLOCK
class Block{
public:
    Block();  //Initializes random numbers
    void RandBlock(); //generate teris randomly
    void TurnBlock();//clockwise rotate teris
    int block[4][4];//Stores generated teris
    int getColor(); //get current color
    void Block_to_block(int BlockType_form_[][4]); // copy teris to block array
    void ChangeBlock(int BlockType_form_1[][4],int BlockType_form_2[][4],
                    int BlockType_form_3[][4],int BlockType_form_4[][4]);  //work with TurnBlock()，rotate teris
private:
	int Type; //record the type of teris that is currently stored in block array (seven types)
	int Form; //record the rotate state of currently saved teris in block array
    int color; // record current color;

 //-------------------------------------------------------------------------//
   // 11
    static int BlockType_1form_1[4][4]; //   ■■■■    // clockwise rotation from form 1-4

    static int BlockType_1form_2[4][4]; //   ■
   							            //    ■
								        //    ■
   								        //    ■

    static int BlockType_1form_3[4][4]; //   ■■■■

    static int BlockType_1form_4[4][4]; //   ■
   							            //    ■
								        //    ■
   								        //    ■
//-------------------------------------------------------------------------//
    //1
    static int BlockType_2form_1[4][4]; //   ■
                                        //    ■■■

    static int BlockType_2form_2[4][4]; //   ■■
     							        //    ■
  								        //    ■

    static int BlockType_2form_3[4][4]; //    ■■■
                                        //         ■

    static int BlockType_2form_4[4][4]; //     ■
                                        //      ■
                                        //    ■■

//-------------------------------------------------------------------------//
    //6
    static int BlockType_3form_1[4][4]; //       ■
                                        //    ■■■

    static int BlockType_3form_2[4][4]; //   ■
                                        //    ■
                                        //    ■■

    static int BlockType_3form_3[4][4]; //   ■■■
                                        //    ■

    static int BlockType_3form_4[4][4]; //     ■■
    							        //      ■
   								        //      ■

//-------------------------------------------------------------------------//
       //5
    static int BlockType_4form_1[4][4]; //     ■
   								        //    ■■■

    static int BlockType_4form_2[4][4]; //   ■
                                        //    ■■
  								        //    ■

    static int BlockType_4form_3[4][4]; //    ■■■
                                        //       ■

    static int BlockType_4form_4[4][4]; //    ■
    							        //   ■■
   							           //      ■

//-------------------------------------------------------------------------//
    //14
    static int BlockType_5form_1[4][4]; //    ■■
                                        //     ■■

    static int BlockType_5form_2[4][4]; //    ■■
                                        //     ■■

    static int BlockType_5form_3[4][4]; //    ■■
                                        //     ■■

    static int BlockType_5form_4[4][4]; //    ■■
                                        //     ■■

//-------------------------------------------------------------------------//
    // 10
    static int BlockType_6form_1[4][4];//      ■■
    							       //     ■■

    static int BlockType_6form_2[4][4]; //    ■
   								        //     ■■
   								        //       ■

    static int BlockType_6form_3[4][4];//      ■■
    							       //     ■■

    static int BlockType_6form_4[4][4]; //    ■
   								        //     ■■
   								        //       ■

//-------------------------------------------------------------------------//
   //4
    static int BlockType_7form_1[4][4]; //    ■■
                                        //       ■■

    static int BlockType_7form_2[4][4]; //     ■
    							        //    ■■
    	      					        //    ■

    static int BlockType_7form_3[4][4]; //    ■■
                                        //       ■■

    static int BlockType_7form_4[4][4]; //     ■
    							        //    ■■
    	      					        //    ■

//-------------------------------------------------------------------------//

};

