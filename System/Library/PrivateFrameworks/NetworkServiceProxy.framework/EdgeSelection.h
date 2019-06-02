/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber, NSMutableDictionary;

@interface EdgeSelection : NSObject <NSSecureCoding> {

	NSData* _networkSignature;
	NSNumber* _interfaceType;
	long long _trialCount;
	double _alpha;
	long long _windowSize;
	NSMutableDictionary* _edgeAttributesDict;

}

@property (nonatomic,retain) NSMutableDictionary * edgeAttributesDict;              //@synthesize edgeAttributesDict=_edgeAttributesDict - In the implementation block
@property (nonatomic,retain) NSData * networkSignature;                             //@synthesize networkSignature=_networkSignature - In the implementation block
@property (nonatomic,retain) NSNumber * interfaceType;                              //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign,nonatomic) long long trialCount;                                  //@synthesize trialCount=_trialCount - In the implementation block
@property (assign,nonatomic) double alpha;                                          //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) long long windowSize;                                  //@synthesize windowSize=_windowSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setInterfaceType:(NSNumber *)arg1 ;
-(NSNumber *)interfaceType;
-(long long)trialCount;
-(NSData *)networkSignature;
-(NSMutableDictionary *)edgeAttributesDict;
-(double)_stochasticRewardFromRTT:(double)arg1 ;
-(void)setTrialCount:(long long)arg1 ;
-(id)initWithNetworkSignature:(id)arg1 interfaceType:(id)arg2 modelParams:(id)arg3 ;
-(void)trainEdgeSelectionModel:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getMinimumLatencyEdge:(/*^block*/id)arg1 ;
-(void)getAttributesForEdge:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setNetworkSignature:(NSData *)arg1 ;
-(void)setEdgeAttributesDict:(NSMutableDictionary *)arg1 ;
-(long long)windowSize;
-(void)setWindowSize:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setAlpha:(double)arg1 ;
-(double)alpha;
@end

