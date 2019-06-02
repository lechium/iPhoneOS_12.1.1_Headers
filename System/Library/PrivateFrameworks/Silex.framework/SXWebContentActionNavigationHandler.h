/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentNavigationHandler.h>

@protocol SXActionProvider, SXActionManager;
@class NSString;

@interface SXWebContentActionNavigationHandler : NSObject <SXWebContentNavigationHandler> {

	id<SXActionProvider> _actionProvider;
	id<SXActionManager> _actionManager;

}

@property (nonatomic,readonly) id<SXActionProvider> actionProvider;              //@synthesize actionProvider=_actionProvider - In the implementation block
@property (nonatomic,readonly) id<SXActionManager> actionManager;                //@synthesize actionManager=_actionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXActionManager>)actionManager;
-(id)initWithActionProvider:(id)arg1 actionManager:(id)arg2 ;
-(id<SXActionProvider>)actionProvider;
-(unsigned long long)handleRequest:(id)arg1 ;
@end
