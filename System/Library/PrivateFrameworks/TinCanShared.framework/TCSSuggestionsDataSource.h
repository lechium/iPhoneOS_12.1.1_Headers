/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TCSSuggestionsObserver.h>

@protocol TCSSuggestionsDataSourceDelegate;
@class TCSSuggestions, NSArray, NSString;

@interface TCSSuggestionsDataSource : NSObject <TCSSuggestionsObserver> {

	int _firstUnlockToken;
	id<TCSSuggestionsDataSourceDelegate> _delegate;
	TCSSuggestions* _suggestions;
	NSArray* _suggestedContacts;

}

@property (nonatomic,retain) TCSSuggestions * suggestions;                                      //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) NSArray * suggestedContacts;                                       //@synthesize suggestedContacts=_suggestedContacts - In the implementation block
@property (assign,nonatomic,__weak) id<TCSSuggestionsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(BOOL)hasSuggestions;
-(void)suggestionsDidChange:(id)arg1 ;
-(id)initWithSuggestions:(id)arg1 ;
-(NSArray *)suggestedContacts;
-(void)setSuggestedContacts:(NSArray *)arg1 ;
-(TCSSuggestions *)suggestions;
-(void)_handleContactStoreDidChange:(id)arg1 ;
-(void)_handleDeviceFirstUnlock;
-(id)_sortedContactsArrayFromArray:(id)arg1 ;
-(void)_handlePersonNamePreferencesChangeNotification;
-(void)_notifyDelegateSuggestionsChanged;
-(void)dealloc;
-(void)setDelegate:(id<TCSSuggestionsDataSourceDelegate>)arg1 ;
-(id<TCSSuggestionsDataSourceDelegate>)delegate;
-(void)_invalidate;
-(void)setSuggestions:(TCSSuggestions *)arg1 ;
@end

