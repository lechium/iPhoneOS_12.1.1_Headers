/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSURL;

@interface SUProtocolButton : NSObject <NSCopying> {

	NSDictionary* _buttonDictionary;

}

@property (nonatomic,readonly) NSDictionary * buttonDictionary;              //@synthesize buttonDictionary=_buttonDictionary - In the implementation block
@property (nonatomic,readonly) NSString * buttonLocation; 
@property (nonatomic,readonly) NSString * buttonTarget; 
@property (nonatomic,readonly) NSString * buttonTitle; 
@property (nonatomic,readonly) NSURL * URL; 
-(NSString *)buttonTarget;
-(NSString *)buttonLocation;
-(id)initWithButtonDictionary:(id)arg1 ;
-(NSDictionary *)buttonDictionary;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)buttonTitle;
@end

