/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class SSUIRunPPTServiceRequest, NSString;

@interface SSEnvironmentDescriptionAppleInternalOptions : NSObject <BSXPCCoding> {

	SSUIRunPPTServiceRequest* _runPPTServiceRequest;

}

@property (nonatomic,retain) SSUIRunPPTServiceRequest * runPPTServiceRequest;              //@synthesize runPPTServiceRequest=_runPPTServiceRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SSUIRunPPTServiceRequest *)runPPTServiceRequest;
-(void)setRunPPTServiceRequest:(SSUIRunPPTServiceRequest *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end
