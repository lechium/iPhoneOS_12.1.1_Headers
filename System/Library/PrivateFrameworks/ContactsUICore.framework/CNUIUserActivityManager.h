/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNLSApplicationWorkspace, CNUIInteractionDonor;
@class CNContactStore;

@interface CNUIUserActivityManager : NSObject {

	CNContactStore* _contactStore;
	id<CNLSApplicationWorkspace> _applicationWorkspace;
	id<CNUIInteractionDonor> _interactionDonor;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) id<CNLSApplicationWorkspace> applicationWorkspace;              //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (nonatomic,readonly) id<CNUIInteractionDonor> interactionDonor;                      //@synthesize interactionDonor=_interactionDonor - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)log;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 interactionDonor:(id)arg3 ;
-(id<CNUIInteractionDonor>)interactionDonor;
-(id)makeActivityAdvertisingViewingOfContact:(id)arg1 ;
-(void)updateUserActivityState:(id)arg1 withContentsOfContact:(id)arg2 ;
-(void)publishRequestToCreateContact:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 ;
-(void)publishRequestToEditContact:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
@end
