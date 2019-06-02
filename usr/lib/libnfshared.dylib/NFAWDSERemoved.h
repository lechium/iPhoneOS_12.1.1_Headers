/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSERemovedEvent, NSString;

@interface NFAWDSERemoved : NSObject <NFAWDEventProtocol> {

	BOOL _hasCardEmulationStarted;
	unsigned _hardwareType;
	AWDNFCSERemovedEvent* _metric;

}

@property (assign,nonatomic) unsigned hardwareType;                          //@synthesize hardwareType=_hardwareType - In the implementation block
@property (assign,nonatomic) unsigned reason; 
@property (assign,nonatomic) BOOL hasExpressTransactionStarted; 
@property (assign,nonatomic) BOOL hasCardEmulationStarted;                   //@synthesize hasCardEmulationStarted=_hasCardEmulationStarted - In the implementation block
@property (nonatomic,retain) AWDNFCSERemovedEvent * metric;                  //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHardwareType:(unsigned)arg1 ;
-(void)setReason:(unsigned)arg1 ;
-(unsigned)hardwareType;
-(void)setHasExpressTransactionStarted:(BOOL)arg1 ;
-(void)setHasCardEmulationStarted:(BOOL)arg1 ;
-(BOOL)hasExpressTransactionStarted;
-(BOOL)hasCardEmulationStarted;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateExceptionUUID:(id)arg1 ;
-(BOOL)hasCardemulationStarted;
-(void)setHasCardemulationStarted:(BOOL)arg1 ;
-(void)setMetric:(AWDNFCSERemovedEvent *)arg1 ;
-(AWDNFCSERemovedEvent *)metric;
-(id)init;
-(void)dealloc;
-(unsigned)reason;
@end

