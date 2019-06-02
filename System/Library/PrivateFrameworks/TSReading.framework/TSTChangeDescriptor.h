/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSTCellRegion, NSHashTable;

@interface TSTChangeDescriptor : NSObject {

	int mChangeDescriptor;
	TSTCellRegion* mCellRegion;
	SCD_Struct_TS139 mCellID;
	TSTCellRegion* mExpandedRegion;
	TSTCellRegion* mStrokeRegion;
	NSHashTable* mReferenceIdentifiers;

}

@property (nonatomic,readonly) int changeDescriptor; 
@property (nonatomic,readonly) TSTCellRegion * cellRegion; 
@property (nonatomic,readonly) SCD_Struct_TS139 cellID; 
@property (nonatomic,readonly) TSTCellRegion * strokeRegion; 
@property (nonatomic,retain) TSTCellRegion * expandedRegion; 
@property (nonatomic,readonly) NSHashTable * referenceIdentifiers; 
+(id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 strokeRegion:(id)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(SCD_Struct_TS139)arg2 cellRegion:(id)arg3 strokeRegion:(id)arg4 ;
+(id)changeDescriptorWithType:(int)arg1 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(SCD_Struct_TS139)arg2 cellRange:(SCD_Struct_TS141)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(SCD_Struct_TS139)arg2 cellRange:(SCD_Struct_TS141)arg3 strokeRange:(SCD_Struct_TS141)arg4 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(SCD_Struct_TS139)arg2 strokeRange:(SCD_Struct_TS141)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 cellRange:(SCD_Struct_TS141)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 strokeRange:(SCD_Struct_TS141)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellRange:(SCD_Struct_TS141)arg2 strokeRange:(SCD_Struct_TS141)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 referenceIdentifiers:(id)arg2 ;
-(TSTCellRegion *)cellRegion;
-(SCD_Struct_TS141)cellRange;
-(int)changeDescriptor;
-(SCD_Struct_TS139)cellID;
-(id)initWithChangeDescriptorType:(int)arg1 andCellRegion:(id)arg2 andCellID:(SCD_Struct_TS139)arg3 andStrokeRegion:(id)arg4 andReferenceIdentifiers:(id)arg5 ;
-(TSTCellRegion *)strokeRegion;
-(TSTCellRegion *)expandedRegion;
-(SCD_Struct_TS141)strokeRange;
-(void)setExpandedRange:(SCD_Struct_TS141)arg1 ;
-(SCD_Struct_TS141)expandedRange;
-(void)setExpandedRegion:(TSTCellRegion *)arg1 ;
-(NSHashTable *)referenceIdentifiers;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end
