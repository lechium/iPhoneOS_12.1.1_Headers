/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSTCell : NSObject <NSCopying> {

	SCD_Struct_TS172* mPrivate;

}
+(id)cell;
-(void)inflateFromStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 suppressingFormulaInflation:(BOOL)arg3 ;
-(void)inflateFromStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 ;
-(id)initWithStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 ;
-(BOOL)isCellContentsEqualToCell:(id)arg1 ;
-(void)writeToStorageRef:(TSTCellStorage*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCell:(id)arg1 ;
@end

