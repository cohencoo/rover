    // Right Front walk
    RFA4.write(activate-offset+upperConst);
    RFB5.write(activate-offset-RB);

    // Right Back stand
    RBA8.write(activate-offset-upperConst);
    RBB9.write(activate-offset-LB);

    // Left Front stand
    LFA2.write(activate+offset+upperConst);
    LFB3.write(activate+offset+LB);

    // Left Back walk
    LBA6.write(activate+offset-upperConst);
    LBB7.write(activate+offset+RB);

    delay(400);

    // Right Front stand
    RFA4.write(activate-offset-upperConst);
    RFB5.write(activate-offset-LB);

    // Right Back walk
    RBA8.write(activate-offset+upperConst);
    RBB9.write(activate-offset-RB);

    // Left Front walk
    LFA2.write(activate+offset-upperConst);
    LFB3.write(activate+offset+RB);

    // Left Back stand
    LBA6.write(activate+offset+upperConst);
    LBB7.write(activate+offset+LB);

    delay(400);

//    // Right Front walk
//    RFA4.write(90-offset+5);
//    RFB5.write(90-offset-30);
//
//    // Right Back walk
//    RBA8.write(90-offset+5);
//    RBB9.write(90-offset-30);
//
//    // Left Front walk
//    LFA2.write(90+offset-5);
//    LFB3.write(90+offset+30);
//
//
//    // Left Back walk
//    LBA6.write(90+offset-5);
//    LBB7.write(90+offset+30);
//
//    delay(400);
//
//    // Right Front stand
//    RFA4.write(90-offset-5);
//    RFB5.write(90-offset-15);
//
//    // Right Back stand
//    RBA8.write(90-offset-5);
//    RBB9.write(90-offset-15);
//
//    // Left Front stand
//    LFA2.write(90+offset+5);
//    LFB3.write(90+offset+15);
//
//    // Left Back stand
//    LBA6.write(90+offset+5);
//    LBB7.write(90+offset+15);
//    
//    delay(400);

// Inverse Kine
//  for (pos = 90; pos <= 110; pos += 1) {
//    LBA6.write(pos);
//    LBB7.write(pos);
//    delay(50);
//  }
//  for (pos = 110; pos >= 90; pos -= 1) {
//    LBA6.write(pos);
//    LBB7.write(pos);
//    delay(50);
//  }
//  
//    LFA2.write(90);
//    RFA4.write(90);
//    LBA6.write(90);
//    RBA8.write(90);
//    
//    LFB3.write(90);
//    RFB5.write(90);
//    LBB7.write(90);
//    RBB9.write(90);



  
   if (testing == "cross") {
    useCross("rf", "lb");
    delay(400);
    useCross("lf", "rb");
   }

   if (testing == "stand") {
    LFA2.write(90);
    RFA4.write(90);
    LBA6.write(90);
    RBA8.write(90);
    
    LFB3.write(90);
    RFB5.write(90);
    LBB7.write(90);
    RBB9.write(90);
   }

  if (testing == "all") {
    
    // Right-Front Stand  
    RFA4.write(80); // Upper
    RFB5.write(60); // Lower
  
    // Right-Back Stand  
    RBA8.write(80); // Upper
    RBB9.write(60); // Lower
    
    // Left-Front Stand
    LFA2.write(105); // Upper
    LFB3.write(120); // Lower
  
    // Left-Back Stand
    LBA6.write(105); // Upper
    LBB7.write(120); // Lower
  
    delay(400);
  
    // Right-Front Walk  
    RFA4.write(90); // Upper
    RFB5.write(60); // Lower
  
    // Right-Back Walk  
    RBA8.write(90); // Upper
    RBB9.write(60); // Lower
    
    // Left-Front Walk
    LFA2.write(90); // Upper
    LFB3.write(120); // Lower
  
    // Left-Back Walk
    LBA6.write(90); // Upper
    LBB7.write(120); // Lower
  
    delay(400);
  }
  
  if (testing == "form") {
  
    // Right-Front Walk  
    RFA4.write(90); // Upper
    RFB5.write(50); // Lower

    // Left-Back Walk
    LBA6.write(90); // Upper
    LBB7.write(120); // Lower

    // Left-Front Stand
    LFA2.write(100); // Upper
    LFB3.write(120); // Lower

    // Right-Back Stand  
    RBA8.write(80); // Upper
    RBB9.write(60); // Lower

    delay(400);
    
    // Left-Front Walk
    LFA2.write(100); // Upper
    LFB3.write(140); // Lower
    
    // Right-Back Walk  
    RBA8.write(80); // Upper
    RBB9.write(50); // Lower

    // Right-Front Stand  
    RFA4.write(80); // Upper
    RFB5.write(60); // Lower

    // Left-Back Stand
    LBA6.write(105); // Upper
    LBB7.write(120); // Lower
    delay(400);
  }

  if (testing == "formold") {
  
    // Right-Front Walk  
    RFA4.write(90); // Upper
    RFB5.write(30); // Lower

    // Left-Back Walk
    LBA6.write(90); // Upper
    LBB7.write(130); // Lower

    // Left-Front Stand
    LFA2.write(105); // Upper
    LFB3.write(120); // Lower

    // Right-Back Stand  
    RBA8.write(80); // Upper
    RBB9.write(60); // Lower
    
    
    delay(400);
    
    // Left-Front Walk
    LFA2.write(90); // Upper
    LFB3.write(130); // Lower
    
    // Right-Back Walk  
    RBA8.write(90); // Upper
    RBB9.write(30); // Lower

    // Right-Front Stand  
    RFA4.write(80); // Upper
    RFB5.write(60); // Lower

    // Left-Back Stand
    LBA6.write(105); // Upper
    LBB7.write(120); // Lower
    delay(400);
  }
