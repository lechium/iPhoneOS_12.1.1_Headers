/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying;
@class NSString, NSDictionary;

@interface PKPaymentSetupField : NSObject {

	id<NSObject><NSCopying> _currentValue;
	BOOL _optional;
	BOOL _currentValueFromCameraCapture;
	BOOL _requiresSecureSubmission;
	NSString* _identifier;
	NSString* _localizedDisplayName;
	NSString* _displayFormat;
	NSString* _defaultValue;
	NSString* _submissionKey;
	NSString* _submissionDestination;
	NSString* _localizedPlaceholder;
	NSDictionary* _rawConfigurationDictionary;

}

@property (nonatomic,copy) NSString * localizedPlaceholder;                                                          //@synthesize localizedPlaceholder=_localizedPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * displayFormat;                                                                 //@synthesize displayFormat=_displayFormat - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                                                                  //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,getter=isOptional,nonatomic) BOOL optional;                                                        //@synthesize optional=_optional - In the implementation block
@property (nonatomic,copy) NSString * submissionKey;                                                                 //@synthesize submissionKey=_submissionKey - In the implementation block
@property (nonatomic,copy) NSString * submissionDestination;                                                         //@synthesize submissionDestination=_submissionDestination - In the implementation block
@property (assign,nonatomic) BOOL requiresSecureSubmission;                                                          //@synthesize requiresSecureSubmission=_requiresSecureSubmission - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * rawConfigurationDictionary;                                       //@synthesize rawConfigurationDictionary=_rawConfigurationDictionary - In the implementation block
@property (getter=isBuiltIn,nonatomic,readonly) BOOL builtIn; 
@property (nonatomic,copy,readonly) NSString * identifier;                                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long fieldType; 
@property (nonatomic,copy) NSString * localizedDisplayName;                                                          //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * compactLocalizedDisplayName; 
@property (nonatomic,copy) id<NSObject><NSCopying> currentValue;                                                     //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,getter=isCurrentValueFromCameraCapture,nonatomic) BOOL currentValueFromCameraCapture;              //@synthesize currentValueFromCameraCapture=_currentValueFromCameraCapture - In the implementation block
+(id)paymentSetupFieldWithIdentifier:(id)arg1 configuration:(id)arg2 ;
+(Class)classForIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
+(id)paymentSetupFieldWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
+(id)newRandomlyGeneratedField;
+(id)sampleCustomPaymentSetupFields;
+(id)paymentSetupFieldWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(void)updateWithConfiguration:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 configuration:(id)arg2 ;
-(void)setSubmissionKey:(NSString *)arg1 ;
-(void)setOptional:(BOOL)arg1 ;
-(void)setSubmissionDestination:(NSString *)arg1 ;
-(void)_setLocalizedDisplayName:(id)arg1 ;
-(void)setLocalizedPlaceholder:(NSString *)arg1 ;
-(void)setDisplayFormat:(NSString *)arg1 ;
-(void)setRequiresSecureSubmission:(BOOL)arg1 ;
-(BOOL)isFieldTypeFooter;
-(void)noteCurrentValueChanged;
-(BOOL)isBuiltIn;
-(id)footerFieldObject;
-(NSString *)submissionKey;
-(NSString *)submissionDestination;
-(BOOL)requiresSecureSubmission;
-(NSDictionary *)rawConfigurationDictionary;
-(NSString *)localizedDisplayName;
-(BOOL)isFieldTypePicker;
-(void)setCurrentValueFromCameraCapture:(BOOL)arg1 ;
-(id)textFieldObject;
-(NSString *)displayFormat;
-(BOOL)isFieldTypeLabel;
-(BOOL)isCurrentValueFromCameraCapture;
-(NSString *)compactLocalizedDisplayName;
-(NSString *)localizedPlaceholder;
-(BOOL)isFieldTypeText;
-(BOOL)isFieldTypeDate;
-(id)dateFieldObject;
-(id)pickerFieldObject;
-(id)labelFieldObject;
-(BOOL)isOptional;
-(BOOL)submissionStringMeetsAllRequirements;
-(id)submissionString;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(unsigned long long)fieldType;
-(id)init;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)displayString;
-(id<NSObject><NSCopying>)currentValue;
-(void)setCurrentValue:(id<NSObject><NSCopying>)arg1 ;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
@end

