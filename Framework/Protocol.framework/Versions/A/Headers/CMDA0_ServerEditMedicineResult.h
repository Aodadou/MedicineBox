//
//  CMDA0_ServerEditMedicineResult.h
//  Protocol
//
//  Created by apple on 16/8/9.
//  Copyright © 2016年 fortune. All rights reserved.
//

#import "ServerCommand.h"
#import "MedicineInfo.h"
@interface CMDA0_ServerEditMedicineResult : ServerCommand
@property(nonatomic,assign) NSInteger modifyType;
@property(nonatomic,strong) MedicineInfo * info;
-(id)initWithInfo:(MedicineInfo*)info;
@end
