/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXActionPreviewActivity.h>

@protocol SXURLPreviewing;
@class NSURL, NSString;

@interface SXURLPreviewActivity : NSObject <SXActionPreviewActivity> {

	id<SXURLPreviewing> _URLPreviewing;
	NSURL* _URL;

}

@property (nonatomic,readonly) id<SXURLPreviewing> URLPreviewing;              //@synthesize URLPreviewing=_URLPreviewing - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previewViewControllerForAction:(id)arg1 ;
-(void)commitViewController:(id)arg1 action:(id)arg2 ;
-(id<SXURLPreviewing>)URLPreviewing;
-(id)initWithURLPreviewing:(id)arg1 URL:(id)arg2 ;
-(NSURL *)URL;
@end

