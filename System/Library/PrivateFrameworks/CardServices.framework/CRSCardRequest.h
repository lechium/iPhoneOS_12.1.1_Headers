/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardServices/CRSRequest.h>
#import <libobjc.A.dylib/CRSCardRequesting.h>

@protocol OS_dispatch_queue, CRContent;
@class NSObject, NSString;

@interface CRSCardRequest : CRSRequest <CRSCardRequesting> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _loadsBundleServices;
	id<CRContent> _content;
	unsigned long long _format;

}

@property (nonatomic,retain) id<CRContent> content;                  //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) unsigned long long format;              //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) BOOL loadsBundleServices;               //@synthesize loadsBundleServices=_loadsBundleServices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerService:(id)arg1 ;
+(void)initialize;
-(void)setContent:(id<CRContent>)arg1 ;
-(void)setFormat:(unsigned long long)arg1 ;
-(void)startWithReply:(/*^block*/id)arg1 ;
-(void)setLoadsBundleServices:(BOOL)arg1 ;
-(id)initWithContent:(id)arg1 format:(unsigned long long)arg2 ;
-(void)_tryRemainingCardServices:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_loadAndRegisterBundleServices:(/*^block*/id)arg1 ;
-(BOOL)loadsBundleServices;
-(id)init;
-(unsigned long long)format;
-(id<CRContent>)content;
@end
