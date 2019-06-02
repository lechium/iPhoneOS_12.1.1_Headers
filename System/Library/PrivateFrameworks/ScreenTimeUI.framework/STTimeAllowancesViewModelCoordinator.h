/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RMGroupFetchedResultsControllerDelegate.h>
#import <libobjc.A.dylib/STTimeAllowancesViewModelCoordinator.h>
@class STTimeAllowancesViewModel;


@protocol STTimeAllowancesViewModelCoordinator <NSObject>
@property (readonly) STTimeAllowancesViewModel * viewModel; 
@required
-(STTimeAllowancesViewModel *)viewModel;
-(void)saveAllowance:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deleteAllowance:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)saveDeviceBedtime:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)saveAlwaysAllowList:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)respondToAskForTime:(id)arg1 withApproval:(BOOL)arg2 timeApproved:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)saveDefaultAlwaysAllowListWithCompletionHandler:(/*^block*/id)arg1;

@end


@protocol RMPersistenceControllerProtocol;
@class STTimeAllowancesViewModel, NSString, NSNumber, RMAskForTimeClient, RMGroupFetchedResultsController, NSManagedObjectID;

@interface STTimeAllowancesViewModelCoordinator : NSObject <RMGroupFetchedResultsControllerDelegate, STTimeAllowancesViewModelCoordinator> {

	STTimeAllowancesViewModel* _viewModel;
	NSString* _organizationIdentifier;
	NSNumber* _userDSID;
	id<RMPersistenceControllerProtocol> _persistenceController;
	RMAskForTimeClient* _askForTimeClient;
	RMGroupFetchedResultsController* _groupFetchResultsController;
	NSManagedObjectID* _userObjectID;

}

@property (nonatomic,copy) NSString * organizationIdentifier;                                              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * userDSID;                                                            //@synthesize userDSID=_userDSID - In the implementation block
@property (nonatomic,readonly) id<RMPersistenceControllerProtocol> persistenceController;                  //@synthesize persistenceController=_persistenceController - In the implementation block
@property (nonatomic,readonly) RMAskForTimeClient * askForTimeClient;                                      //@synthesize askForTimeClient=_askForTimeClient - In the implementation block
@property (nonatomic,readonly) RMGroupFetchedResultsController * groupFetchResultsController;              //@synthesize groupFetchResultsController=_groupFetchResultsController - In the implementation block
@property (nonatomic,copy) NSManagedObjectID * userObjectID;                                               //@synthesize userObjectID=_userObjectID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) STTimeAllowancesViewModel * viewModel;                                                //@synthesize viewModel=_viewModel - In the implementation block
-(STTimeAllowancesViewModel *)viewModel;
-(id<RMPersistenceControllerProtocol>)persistenceController;
-(void)saveAllowance:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllowance:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveDeviceBedtime:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveAlwaysAllowList:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)respondToAskForTime:(id)arg1 withApproval:(BOOL)arg2 timeApproved:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSNumber *)userDSID;
-(void)setUserDSID:(NSNumber *)arg1 ;
-(void)loadViewModelWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_registerForPersistenceStoreNotifications;
-(NSString *)organizationIdentifier;
-(NSManagedObjectID *)userObjectID;
-(void)setUserObjectID:(NSManagedObjectID *)arg1 ;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3 ;
-(void)saveDefaultAlwaysAllowListWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)groupResultsController:(id)arg1 didChangeResultsForRequest:(id)arg2 objectID:(id)arg3 changeType:(unsigned long long)arg4 ;
-(id)_alwaysAllowActivationIdentifier;
-(BOOL)_isPersonalOrganization;
-(id)_bedtimeActivationIdentifier;
-(id)_bedtimeConfigurationIdentifier;
-(id)_budgetConfigurationIdentifier;
-(id)_alwaysAllowConfigurationIdentifier;
-(RMAskForTimeClient *)askForTimeClient;
-(id)_iCloudAccountPredicate;
-(void)_saveActivationDictionary:(id)arg1 configurationDictionaries:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_deleteActivationWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(RMGroupFetchedResultsController *)groupFetchResultsController;
@end

