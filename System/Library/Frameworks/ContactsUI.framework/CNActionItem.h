/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNActionViewTemplateImage;
@class NSString;

@interface CNActionItem : NSObject {

	BOOL _disabled;
	NSString* _type;
	NSString* _title;
	id<CNActionViewTemplateImage> _templateImage;

}

@property (nonatomic,readonly) id<CNActionViewTemplateImage> templateImage;              //@synthesize templateImage=_templateImage - In the implementation block
@property (nonatomic,readonly) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                              //@synthesize disabled=_disabled - In the implementation block
+(id)actionItemWithTemplateImage:(id)arg1 type:(id)arg2 ;
+(id)actionItemWithImage:(id)arg1 type:(id)arg2 ;
-(id)initWithTemplateImage:(id)arg1 type:(id)arg2 ;
-(id<CNActionViewTemplateImage>)templateImage;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)type;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
@end

