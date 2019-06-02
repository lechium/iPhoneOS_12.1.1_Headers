/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentComponentInteractionManagerFactory.h>

@protocol SXWebContentComponentInteractionManagerFactory <NSObject>
@required
-(id)interactionManagerForComponentView:(id)arg1;

@end


@protocol SXWebContentInteractionProvider, SXComponentInteractionHandlerManager, SXWebContentComponentInteractionHandlerFactory;
@class NSString;

@interface SXWebContentComponentInteractionManagerFactory : NSObject <SXWebContentComponentInteractionManagerFactory> {

	id<SXWebContentInteractionProvider> _interactionProvider;
	id<SXComponentInteractionHandlerManager> _interactionHandlerManager;
	id<SXWebContentComponentInteractionHandlerFactory> _componentInteractionHandlerFactory;

}

@property (nonatomic,readonly) id<SXWebContentInteractionProvider> interactionProvider;                                            //@synthesize interactionProvider=_interactionProvider - In the implementation block
@property (nonatomic,readonly) id<SXComponentInteractionHandlerManager> interactionHandlerManager;                                 //@synthesize interactionHandlerManager=_interactionHandlerManager - In the implementation block
@property (nonatomic,readonly) id<SXWebContentComponentInteractionHandlerFactory> componentInteractionHandlerFactory;              //@synthesize componentInteractionHandlerFactory=_componentInteractionHandlerFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXComponentInteractionHandlerManager>)interactionHandlerManager;
-(id<SXWebContentComponentInteractionHandlerFactory>)componentInteractionHandlerFactory;
-(id<SXWebContentInteractionProvider>)interactionProvider;
-(id)interactionManagerForComponentView:(id)arg1 ;
-(id)initWithInteractionProvider:(id)arg1 interactionHandlerManager:(id)arg2 componentInteractionHandlerFactory:(id)arg3 ;
@end

