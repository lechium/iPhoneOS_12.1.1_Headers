/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmojiKit/EmojiKit-Structs.h>
@class NSMutableDictionary;

@interface EMKTextEnumerator : NSObject {

	NSMutableDictionary* _emojiDatasByLanguage;

}
-(id)emojiDataForLanguage:(id)arg1 ;
-(void)enumerateEmojiSignifiersInString:(id)arg1 touchingRange:(NSRange)arg2 language:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)init;
@end

