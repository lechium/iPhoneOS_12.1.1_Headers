/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, NSMutableArray;

@interface AWDProactiveModelFittingEvaluation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDProactiveModelFittingEvalMetrics* _evaluationMetrics;
	AWDProactiveModelFittingMinibatchStats* _minibatchStats;
	AWDProactiveModelFittingModelInfo* _modelInfo;
	NSMutableArray* _precisionAtKs;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasModelInfo; 
@property (nonatomic,retain) AWDProactiveModelFittingModelInfo * modelInfo;                        //@synthesize modelInfo=_modelInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasMinibatchStats; 
@property (nonatomic,retain) AWDProactiveModelFittingMinibatchStats * minibatchStats;              //@synthesize minibatchStats=_minibatchStats - In the implementation block
@property (nonatomic,readonly) BOOL hasEvaluationMetrics; 
@property (nonatomic,retain) AWDProactiveModelFittingEvalMetrics * evaluationMetrics;              //@synthesize evaluationMetrics=_evaluationMetrics - In the implementation block
@property (nonatomic,retain) NSMutableArray * precisionAtKs;                                       //@synthesize precisionAtKs=_precisionAtKs - In the implementation block
+(Class)precisionAtKType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setModelInfo:(AWDProactiveModelFittingModelInfo *)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(void)setMinibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg1 ;
-(void)setEvaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg1 ;
-(BOOL)hasModelInfo;
-(BOOL)hasMinibatchStats;
-(BOOL)hasEvaluationMetrics;
-(AWDProactiveModelFittingMinibatchStats *)minibatchStats;
-(AWDProactiveModelFittingEvalMetrics *)evaluationMetrics;
-(void)addPrecisionAtK:(id)arg1 ;
-(unsigned long long)precisionAtKsCount;
-(void)clearPrecisionAtKs;
-(id)precisionAtKAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)precisionAtKs;
-(void)setPrecisionAtKs:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

