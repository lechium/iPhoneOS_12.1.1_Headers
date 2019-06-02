/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentNavigationObserver.h>

@protocol SXWebContentNavigationObserver <NSObject>
@required
-(void)handledNavigationWithURL:(id)arg1;

@end


@class NSString;

@interface SXWebContentNavigationObserver : NSObject <SXWebContentNavigationObserver> {

	/*^block*/id _block;

}

@property (nonatomic,readonly) id block;                            //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handledNavigationWithURL:(id)arg1 ;
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

