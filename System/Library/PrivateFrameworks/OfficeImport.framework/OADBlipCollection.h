/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface OADBlipCollection : NSObject {

	NSMutableArray* mBlips;

}

@property (nonatomic,retain) NSMutableArray * blips; 
-(NSMutableArray *)blips;
-(id)blipAtIndex:(int)arg1 ;
-(unsigned)addBlip:(id)arg1 ;
-(unsigned)blipCount;
-(void)setBlips:(NSMutableArray *)arg1 ;
-(id)init;
-(void)dealloc;
@end
