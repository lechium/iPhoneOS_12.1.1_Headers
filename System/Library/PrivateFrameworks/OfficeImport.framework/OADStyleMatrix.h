/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface OADStyleMatrix : NSObject {

	NSString* mName;
	NSMutableArray* mFills;
	NSMutableArray* mStrokes;
	NSMutableArray* mEffects;
	NSMutableArray* mBgFills;

}

@property (nonatomic,copy) NSString * name; 
+(id)objectInArray:(id)arg1 withPossiblyOutOfRangeIndex:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(id)bgFillAtIndex:(unsigned long long)arg1 ;
-(void)addFill:(id)arg1 ;
-(void)addStroke:(id)arg1 ;
-(void)addEffects:(id)arg1 ;
-(void)addBgFill:(id)arg1 ;
-(id)strokeAtIndex:(unsigned long long)arg1 ;
-(id)fillAtIndex:(unsigned long long)arg1 ;
-(id)effectsAtIndex:(unsigned long long)arg1 ;
-(void)validateStyleMatrix;
-(void)padArray:(id)arg1 withContentsOfArray:(id)arg2 ;
-(unsigned long long)fillCount;
-(id)fillAtIndex:(unsigned long long)arg1 color:(id)arg2 ;
-(unsigned long long)strokeCount;
-(id)strokeAtIndex:(unsigned long long)arg1 color:(id)arg2 ;
-(unsigned long long)effectsCount;
-(id)effectsAtIndex:(unsigned long long)arg1 color:(id)arg2 ;
-(unsigned long long)bgFillCount;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEmpty;
@end

