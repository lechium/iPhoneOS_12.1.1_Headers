/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteTextInput/RemoteTextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, TITextInputTraits, NSIndexSet, NSDictionary;

@interface RTIDocumentTraits : NSObject <NSCopying, NSSecureCoding> {

	NSString* _appId;
	NSString* _bundleId;
	NSString* _appName;
	NSString* _localizedAppName;
	NSArray* _associatedDomains;
	NSString* _title;
	NSString* _prompt;
	TITextInputTraits* _textInputTraits;
	NSIndexSet* _PINEntrySeparatorIndexes;
	unsigned long long _autofillMode;
	NSDictionary* _autofillContext;
	NSRange _validTextRange;

}

@property (nonatomic,copy) NSString * appId;                                     //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                                  //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy) NSString * appName;                                   //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * localizedAppName;                          //@synthesize localizedAppName=_localizedAppName - In the implementation block
@property (nonatomic,retain) NSArray * associatedDomains;                        //@synthesize associatedDomains=_associatedDomains - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                    //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,retain) TITextInputTraits * textInputTraits;                //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,retain) NSIndexSet * PINEntrySeparatorIndexes;              //@synthesize PINEntrySeparatorIndexes=_PINEntrySeparatorIndexes - In the implementation block
@property (assign,nonatomic) NSRange validTextRange;                             //@synthesize validTextRange=_validTextRange - In the implementation block
@property (assign,nonatomic) unsigned long long autofillMode;                    //@synthesize autofillMode=_autofillMode - In the implementation block
@property (nonatomic,retain) NSDictionary * autofillContext;                     //@synthesize autofillContext=_autofillContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAppId:(NSString *)arg1 ;
-(void)setLocalizedAppName:(NSString *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(void)copyContextualPropertiesFromDocumentTraits:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(TITextInputTraits *)textInputTraits;
-(NSRange)validTextRange;
-(void)setValidTextRange:(NSRange)arg1 ;
-(NSIndexSet *)PINEntrySeparatorIndexes;
-(void)setPINEntrySeparatorIndexes:(NSIndexSet *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setTextInputTraits:(TITextInputTraits *)arg1 ;
-(void)setAutofillMode:(unsigned long long)arg1 ;
-(unsigned long long)autofillMode;
-(NSDictionary *)autofillContext;
-(NSString *)appId;
-(NSArray *)associatedDomains;
-(void)setAutofillContext:(NSDictionary *)arg1 ;
-(NSString *)localizedAppName;
-(NSString *)appName;
@end

