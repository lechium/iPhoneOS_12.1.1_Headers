/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString;

@interface WBSReaderFont : NSObject {

	NSString* _familyName;
	NSString* _displayName;
	NSString* _localizedName;
	BOOL _hasCalculatedLocalizedName;
	BOOL _systemFont;

}

@property (nonatomic,readonly) NSString * familyName;                            //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (getter=isSystemFont,nonatomic,readonly) BOOL systemFont;              //@synthesize systemFont=_systemFont - In the implementation block
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
+(id)systemFont;
+(id)fontWithFamilyName:(id)arg1 displayName:(id)arg2 ;
-(id)_initWithFamilyName:(id)arg1 displayName:(id)arg2 isSystemFont:(BOOL)arg3 ;
-(RetainPtr<const __CTFontDescriptor *>*)_fontDescriptorRefForFontFamilyName:(id)arg1 restrictToEnabled:(BOOL)arg2 ;
-(id)fontOfSize:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_localizedName;
-(NSString *)displayName;
-(BOOL)isInstalled;
-(NSString *)familyName;
-(BOOL)isSystemFont;
@end

