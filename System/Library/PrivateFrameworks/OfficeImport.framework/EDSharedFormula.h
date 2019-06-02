/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDFormula.h>

@class EDReference;

@interface EDSharedFormula : EDFormula {

	BOOL _forceNonBaseFormula;
	int _rowBaseOrOffset;
	int _columnBaseOrOffset;
	unsigned long long _baseFormulaIndex;
	EDReference* _baseFormulaRange;

}

@property (assign,nonatomic) unsigned long long baseFormulaIndex;              //@synthesize baseFormulaIndex=_baseFormulaIndex - In the implementation block
@property (assign,nonatomic) BOOL forceNonBaseFormula;                         //@synthesize forceNonBaseFormula=_forceNonBaseFormula - In the implementation block
@property (assign,nonatomic) int rowBaseOrOffset;                              //@synthesize rowBaseOrOffset=_rowBaseOrOffset - In the implementation block
@property (assign,nonatomic) int columnBaseOrOffset;                           //@synthesize columnBaseOrOffset=_columnBaseOrOffset - In the implementation block
@property (nonatomic,readonly) EDReference * baseFormulaRange;                 //@synthesize baseFormulaRange=_baseFormulaRange - In the implementation block
-(BOOL)isBaseFormula;
-(BOOL)convertTokensToShared;
-(EDReference *)baseFormulaRange;
-(void)unarchiveFromData:(CFDataRef)arg1 offset:(unsigned long long*)arg2 ;
-(void)archiveByAppendingToMutableData:(CFDataRef)arg1 ;
-(id)initWithFormula:(id)arg1 ;
-(BOOL)forceNonBaseFormula;
-(id)warningWithRowBlocks:(id)arg1 ;
-(void)setForceNonBaseFormula:(BOOL)arg1 ;
-(void)updateBaseFormulaRangeWithRow:(int)arg1 column:(int)arg2 ;
-(void)setRowBaseOrOffset:(int)arg1 ;
-(void)setColumnBaseOrOffset:(int)arg1 ;
-(void)setBaseFormulaIndex:(unsigned long long)arg1 ;
-(id)baseFormulaWithRowBlocks:(id)arg1 ;
-(int)rowBaseOrOffset;
-(int)columnBaseOrOffset;
-(BOOL)isSharedFormula;
-(unsigned long long)baseFormulaIndex;
-(id)init;
-(void)dealloc;
-(id)description;
@end

