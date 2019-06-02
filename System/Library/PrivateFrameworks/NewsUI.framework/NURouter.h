/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NURouter.h>

@protocol NURouter <NSObject>
@required
-(void)routeToNewsAppForYouFeed;

@end


@protocol NUURLHandling;
@class NSString;

@interface NURouter : NSObject <NURouter> {

	id<NUURLHandling> _urlHandler;

}

@property (nonatomic,readonly) id<NUURLHandling> urlHandler;              //@synthesize urlHandler=_urlHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUURLHandling>)urlHandler;
-(void)routeToNewsAppForYouFeed;
-(id)initWithURLHandler:(id)arg1 ;
@end

