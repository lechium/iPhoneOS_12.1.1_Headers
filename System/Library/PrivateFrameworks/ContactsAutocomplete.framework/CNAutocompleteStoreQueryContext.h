/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNCache;

@interface CNAutocompleteStoreQueryContext : NSObject {

	CNCache* _directoryServerReuseCache;
	CNCache* _calendarServerReuseCache;

}

@property (readonly) CNCache * directoryServerReuseCache;              //@synthesize directoryServerReuseCache=_directoryServerReuseCache - In the implementation block
@property (readonly) CNCache * calendarServerReuseCache;               //@synthesize calendarServerReuseCache=_calendarServerReuseCache - In the implementation block
+(id)cacheBoundaryStrategies;
-(CNCache *)directoryServerReuseCache;
-(CNCache *)calendarServerReuseCache;
-(id)init;
@end

