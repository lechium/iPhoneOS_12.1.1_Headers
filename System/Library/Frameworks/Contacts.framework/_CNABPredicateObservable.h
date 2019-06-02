/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/ABPredicateDelegate.h>

@protocol CNObserver;
@class ABPredicate, CNContactsEnvironment, CNCancelationToken, NSString;

@interface _CNABPredicateObservable : CNObservable <ABPredicateDelegate> {

	void* _addressBook;
	unsigned _sortOrdering;
	ABPredicate* _predicate;
	unsigned long long _options;
	CNContactsEnvironment* _environment;
	CNCancelationToken* _cancelationToken;
	id<CNObserver> _observer;

}

@property (nonatomic,readonly) ABPredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) unsigned sortOrdering;                              //@synthesize sortOrdering=_sortOrdering - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) void* addressBook;                                  //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,readonly) CNContactsEnvironment * environment;                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) CNCancelationToken * cancelationToken;              //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (nonatomic,retain) id<CNObserver> observer;                              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observableWithPredicates:(id)arg1 sortOrdering:(unsigned)arg2 options:(unsigned long long)arg3 addressBook:(void*)arg4 environment:(id)arg5 ;
-(id)initWithPredicate:(id)arg1 sortOrdering:(unsigned)arg2 options:(unsigned long long)arg3 addressBook:(void*)arg4 environment:(id)arg5 ;
-(unsigned)sortOrdering;
-(CNCancelationToken *)cancelationToken;
-(void*)addressBook;
-(id)subscribe:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 moreComing:(BOOL)arg3 ;
-(void)dealloc;
-(void)setObserver:(id<CNObserver>)arg1 ;
-(id<CNObserver>)observer;
-(unsigned long long)options;
-(CNContactsEnvironment *)environment;
-(ABPredicate *)predicate;
@end

