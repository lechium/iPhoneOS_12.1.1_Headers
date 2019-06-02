/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TURouteControllerClient.h>

@protocol OS_dispatch_queue, TURouteControllerActions;
@class NSObject, NSHashTable, NSDictionary, NSArray, TURoute, NSString;

@interface TURouteController : NSObject <TURouteControllerClient> {

	NSObject*<OS_dispatch_queue> _queue;
	id<TURouteControllerActions> _actionsDelegate;
	NSHashTable* _delegates;
	NSDictionary* _routesByUniqueIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) id<TURouteControllerActions> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,readonly) NSHashTable * delegates;                                          //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,copy) NSDictionary * routesByUniqueIdentifier;                              //@synthesize routesByUniqueIdentifier=_routesByUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * routes; 
@property (nonatomic,copy,readonly) TURoute * pickedRoute; 
@property (nonatomic,copy,readonly) TURoute * receiverRoute; 
@property (nonatomic,copy,readonly) TURoute * speakerRoute; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)routes;
-(void)addDelegate:(id)arg1 ;
-(id<TURouteControllerActions>)actionsDelegate;
-(TURoute *)pickedRoute;
-(void)pickRoute:(id)arg1 ;
-(NSDictionary *)routesByUniqueIdentifier;
-(void)pickRouteWithUniqueIdentifier:(id)arg1 ;
-(void)setRoutesByUniqueIdentifier:(NSDictionary *)arg1 ;
-(oneway void)handleRoutesByUniqueIdentifierUpdated:(id)arg1 ;
-(void)handleServerReconnect;
-(void)handleServerDisconnect;
-(id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2 ;
-(TURoute *)receiverRoute;
-(TURoute *)speakerRoute;
-(void)removeDelegate:(id)arg1 ;
-(NSHashTable *)delegates;
-(NSObject*<OS_dispatch_queue>)queue;
@end

