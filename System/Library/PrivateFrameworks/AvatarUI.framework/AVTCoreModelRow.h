/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSOrderedSet, AVTCoreModelRowOptions;

@interface AVTCoreModelRow : NSObject {

	NSString* _title;
	NSOrderedSet* _representedTags;
	AVTCoreModelRowOptions* _options;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * representedTags;              //@synthesize representedTags=_representedTags - In the implementation block
@property (nonatomic,readonly) AVTCoreModelRowOptions * options;                 //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
-(id)initWithTitle:(id)arg1 representedTags:(id)arg2 options:(id)arg3 ;
-(NSOrderedSet *)representedTags;
-(id)initWithTitle:(id)arg1 representedTags:(id)arg2 options:(id)arg3 identifier:(id)arg4 ;
-(NSString *)identifier;
-(id)description;
-(NSString *)title;
-(AVTCoreModelRowOptions *)options;
@end

