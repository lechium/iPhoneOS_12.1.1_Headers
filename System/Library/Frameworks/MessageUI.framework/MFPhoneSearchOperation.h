/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/_MFAddressBookPropertySearchOperation.h>
#import <libobjc.A.dylib/ABPredicateDelegate.h>

@class NSString;

@interface MFPhoneSearchOperation : _MFAddressBookPropertySearchOperation <ABPredicateDelegate> {

	CFStringRef _countryCode;
	CFArrayRef _uids;
	CFArrayRef _addresses;
	CFArrayRef _identifiers;
	NSString* _searchTerm;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)property;
-(CFArrayRef)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const _CFArray*)arg2 identifiers:(const _CFArray*)arg3 ;
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(void)dealloc;
@end

