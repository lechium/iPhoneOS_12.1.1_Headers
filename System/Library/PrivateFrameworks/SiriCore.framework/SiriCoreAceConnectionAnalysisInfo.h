/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSNumber, SiriCoreConnectionType, NSString;

@interface SiriCoreAceConnectionAnalysisInfo : NSObject {

	BOOL _wwanPreferred;
	int _interfaceIndex;
	NSURL* _connectionURL;
	NSNumber* _sendBufferSize;
	SiriCoreConnectionType* _connectionType;
	NSString* _policyId;

}

@property (nonatomic,readonly) NSURL * connectionURL;                                //@synthesize connectionURL=_connectionURL - In the implementation block
@property (nonatomic,readonly) int interfaceIndex;                                   //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sendBufferSize;                       //@synthesize sendBufferSize=_sendBufferSize - In the implementation block
@property (nonatomic,readonly) BOOL wwanPreferred;                                   //@synthesize wwanPreferred=_wwanPreferred - In the implementation block
@property (nonatomic,readonly) SiriCoreConnectionType * connectionType;              //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,copy) NSString * policyId;                                      //@synthesize policyId=_policyId - In the implementation block
-(BOOL)wwanPreferred;
-(NSURL *)connectionURL;
-(int)interfaceIndex;
-(NSNumber *)sendBufferSize;
-(SiriCoreConnectionType *)connectionType;
-(NSString *)policyId;
-(void)setPolicyId:(NSString *)arg1 ;
-(id)initWithConnectionURL:(id)arg1 interfaceIndex:(int)arg2 sendBufferSize:(id)arg3 wwanPreferred:(BOOL)arg4 connectionType:(id)arg5 policyId:(id)arg6 ;
@end

