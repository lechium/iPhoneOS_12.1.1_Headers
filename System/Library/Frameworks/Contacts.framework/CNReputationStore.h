/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNSchedulerProvider;
@class CNReputationCoreRecentsAdapter, CNReputationContactsAdapter, CNReputationLogger;

@interface CNReputationStore : NSObject {

	CNReputationCoreRecentsAdapter* _coreRecentsAdapter;
	CNReputationContactsAdapter* _contactsAdapter;
	CNReputationLogger* _logger;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) CNReputationCoreRecentsAdapter * coreRecentsAdapter;              //@synthesize coreRecentsAdapter=_coreRecentsAdapter - In the implementation block
@property (nonatomic,readonly) CNReputationContactsAdapter * contactsAdapter;                    //@synthesize contactsAdapter=_contactsAdapter - In the implementation block
@property (nonatomic,readonly) CNReputationLogger * logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                        //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
-(id)initWithCoreRecentsAdapter:(id)arg1 contactsAdapter:(id)arg2 logger:(id)arg3 schedulerProvider:(id)arg4 ;
-(id)makeFutureForHandle:(id)arg1 ;
-(CNReputationCoreRecentsAdapter *)coreRecentsAdapter;
-(CNReputationContactsAdapter *)contactsAdapter;
-(id)reputationForHandle:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(CNReputationLogger *)logger;
-(id)init;
@end
