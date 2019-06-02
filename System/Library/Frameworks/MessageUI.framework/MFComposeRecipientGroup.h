/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFComposeRecipient.h>

@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient {

	NSArray* _children;

}
-(id)address;
-(void*)record;
-(id)initWithChildren:(id)arg1 displayString:(id)arg2 ;
-(id)placeholderName;
-(id)sortedChildren;
-(id)childrenWithCompleteMatches;
-(BOOL)wasCompleteMatch;
-(id)completelyMatchedAttributedStrings;
-(void)_populateSortedChildren;
-(id)compositeName;
-(id)commentedAddress;
-(BOOL)isRemovableFromSearchResults;
-(id)unlocalizedLabel;
-(int)property;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)label;
-(BOOL)isGroup;
-(id)displayString;
-(id)children;
-(int)recordID;
@end
