/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCPeerPaymentEnrolled, NSString;

@interface NFAWDPeerPaymentEnrolled : NSObject <NFAWDEventProtocol> {

	AWDNFCPeerPaymentEnrolled* _metric;

}

@property (nonatomic,retain) AWDNFCPeerPaymentEnrolled * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setErrorStep:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)setMetric:(AWDNFCPeerPaymentEnrolled *)arg1 ;
-(AWDNFCPeerPaymentEnrolled *)metric;
-(id)init;
-(void)dealloc;
-(void)setDuration:(unsigned long long)arg1 ;
@end

