/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class PDFAnnotationPrivateVars, UIFont, UIColor, NSArray, NSString, PDFDestination, NSURL, PDFPage, NSDate, PDFBorder, PDFAction, NSDictionary;

@interface PDFAnnotation : NSObject <NSCopying, NSCoding> {

	PDFAnnotationPrivateVars* _private;

}

@property (nonatomic,copy) UIFont * font; 
@property (nonatomic,copy) UIColor * fontColor; 
@property (nonatomic,copy) UIColor * interiorColor; 
@property (assign,nonatomic) long long alignment; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
@property (assign,nonatomic) long long startLineStyle; 
@property (assign,nonatomic) long long endLineStyle; 
@property (assign,nonatomic) long long iconType; 
@property (nonatomic,copy) NSArray * quadrilateralPoints; 
@property (assign,nonatomic) long long markupType; 
@property (nonatomic,copy) NSString * widgetFieldType; 
@property (assign,nonatomic) long long widgetControlType; 
@property (assign,getter=isMultiline,nonatomic) BOOL multiline; 
@property (nonatomic,readonly) BOOL isPasswordField; 
@property (assign,getter=hasComb,nonatomic) BOOL comb; 
@property (assign,nonatomic) long long maximumLength; 
@property (nonatomic,copy) NSString * widgetStringValue; 
@property (nonatomic,copy) NSString * widgetDefaultStringValue; 
@property (assign,nonatomic) BOOL allowsToggleToOff; 
@property (assign,nonatomic) BOOL radiosInUnison; 
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly; 
@property (assign,getter=isListChoice,nonatomic) BOOL listChoice; 
@property (nonatomic,copy) NSArray * choices; 
@property (nonatomic,copy) NSArray * values; 
@property (assign,nonatomic) long long buttonWidgetState; 
@property (nonatomic,copy) NSString * buttonWidgetStateString; 
@property (assign,getter=isOpen,nonatomic) BOOL open; 
@property (nonatomic,readonly) NSArray * paths; 
@property (nonatomic,retain) PDFDestination * destination; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSString * fieldName; 
@property (nonatomic,copy) NSString * caption; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (nonatomic,copy) NSString * stampName; 
@property (assign,nonatomic,__weak) PDFPage * page; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) BOOL shouldDisplay; 
@property (assign,nonatomic) BOOL shouldPrint; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,copy) NSString * userName; 
@property (nonatomic,retain) PDFAnnotation * popup; 
@property (nonatomic,retain) PDFBorder * border; 
@property (nonatomic,copy) UIColor * color; 
@property (nonatomic,copy) NSString * contents; 
@property (nonatomic,retain) PDFAction * action; 
@property (nonatomic,readonly) BOOL hasAppearanceStream; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,copy,readonly) NSDictionary * annotationKeyValues; 
+(id)getProperNameStringFromString:(id)arg1 ;
+(id)nameForLineStyle:(long long)arg1 ;
+(long long)lineStyleFromName:(id)arg1 ;
-(NSString *)userName;
-(NSArray *)paths;
-(unsigned long long)flags;
-(void)setFieldName:(NSString *)arg1 ;
-(NSString *)fieldName;
-(long long)iconType;
-(NSString *)caption;
-(void)setIconType:(long long)arg1 ;
-(void)setCaption:(NSString *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(CGPDFDictionaryRef)sourceDictionary;
-(CFDictionaryRef)dictionaryRef;
-(id)pdfAnnotationUUID;
-(PDFAnnotation *)popup;
-(CGPDFDictionaryRef)popupDictionary;
-(id)pathLock;
-(BOOL)isSignature;
-(id)widgetOnStateString;
-(id)mouseHoverBackgroundColor;
-(id)accessibilityNode;
-(BOOL)isFullyConstructed;
-(id)akAnnotationAdaptor;
-(id)initCommonWithBounds:(CGRect)arg1 ;
-(void)secondaryInit;
-(BOOL)setRect:(CGRect)arg1 forAnnotationKey:(id)arg2 ;
-(BOOL)setValue:(id)arg1 forAnnotationKey:(id)arg2 ;
-(id)getPDFKeyMappingDictionary;
-(void)setShouldPrint:(BOOL)arg1 ;
-(id)valueForAnnotationKey:(id)arg1 ;
-(BOOL)isMarkupAnnotationSubtype;
-(void)setQuadrilateralPoints:(NSArray *)arg1 ;
-(void)_generateFormFieldName;
-(void)setWidgetOnStateString:(id)arg1 ;
-(BOOL)savesAppearanceStream;
-(void)setSavesAppearanceStream:(BOOL)arg1 ;
-(CGPDFFormRef)appearance:(int)arg1 ;
-(void)setAppearance:(CGPDFFormRef)arg1 forType:(int)arg2 ;
-(void)setPopupInternal:(id)arg1 scanPage:(BOOL)arg2 ;
-(void)setPDFAnnotationDictionary:(id)arg1 ;
-(void)removeAKAnnotationAdaptor;
-(void)_releaseDictionaryRef;
-(void)releaseCGPathArray;
-(CGPDFAnnotationRef)CGPDFAnnotation;
-(void)removeValueForAnnotationKey:(id)arg1 ;
-(BOOL)_annotationAllowsCommenting:(id)arg1 ;
-(void)_savePropertiesBeforeSetBounds;
-(void)_restorePropertiesAfterSetBounds;
-(void)_didSetValue:(id)arg1 forAnnotationKey:(id)arg2 ;
-(void)updateAnnotationEffect;
-(NSArray *)quadrilateralPoints;
-(BOOL)isMarkupAnnotation;
-(BOOL)hasComb;
-(BOOL)isPasswordField;
-(void)_printDictionary:(id)arg1 atDepth:(int)arg2 ;
-(NSDictionary *)annotationKeyValues;
-(BOOL)_isValidAnnotationKey:(id)arg1 ;
-(BOOL)_setArray:(id)arg1 forAnnotationKey:(id)arg2 ;
-(BOOL)setBoolean:(BOOL)arg1 forAnnotationKey:(id)arg2 ;
-(BOOL)_setDictionary:(id)arg1 forAnnotationKey:(id)arg2 ;
-(BOOL)_setInteger:(id)arg1 forAnnotationKey:(id)arg2 ;
-(BOOL)_setString:(id)arg1 forAnnotationKey:(id)arg2 ;
-(BOOL)_setVarious:(id)arg1 forAnnotationKey:(id)arg2 ;
-(void)setWidgetStringValue:(NSString *)arg1 ;
-(void)_didRemoveValueForAnnotationKey:(id)arg1 ;
-(CFDictionaryRef)commonCreateDictionaryRef;
-(void)_addAKAnnotationToDictionary:(CFDictionaryRef)arg1 ;
-(void)setDictionaryRef:(CFDictionaryRef)arg1 ;
-(BOOL)_shouldReadAppearanceStreams;
-(void)getAppearancesFromDictionary:(CGPDFDictionaryRef)arg1 ofType:(int)arg2 ;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(id)getFontFromAppearanceString:(CGPDFStringRef)arg1 ;
-(id)getColorFromAppearanceString:(CGPDFStringRef)arg1 ;
-(void)setIsSignature:(BOOL)arg1 ;
-(id)getFullFieldNameFromDictionary:(CGPDFDictionaryRef)arg1 ;
-(void)setButtonWidgetState:(long long)arg1 ;
-(void)setWidgetControlType:(long long)arg1 ;
-(id)_createArrayForCGRect:(CGRect)arg1 ;
-(id)_createArrayForColor:(id)arg1 ;
-(void)addAppearanceForKey:(CFStringRef)arg1 toDictionaryRef:(CFDictionaryRef)arg2 ;
-(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
-(id)mouseDownAction;
-(long long)startLineStyle;
-(long long)endLineStyle;
-(long long)buttonWidgetState;
-(void*)_sanitizeValue:(id)arg1 forKey:(id)arg2 ;
-(id)getFontFromAppearanceNSString:(id)arg1 ;
-(id)getColorFromAppearanceNSString:(id)arg1 ;
-(id)tokenizeAppearanceString:(id)arg1 ;
-(double)pointSizeFromAppearanceTokens:(id)arg1 ;
-(id)fontNameFromAppearanceTokens:(id)arg1 ;
-(id)colorFromAppearanceTokens:(id)arg1 ;
-(void)addRect:(CGRect)arg1 forKey:(CFStringRef)arg2 toDictionaryRef:(CFDictionaryRef)arg3 ;
-(void)addActionToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addAdditionalActionsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)formData;
-(long long)widgetControlType;
-(void)addNormalAndDownAppearanceToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addNormalAppearanceToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addNormalAndDownAppearanceWithStateToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addNormalAppearanceWithStateToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addBorderToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addBorderStyleToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addColor:(id)arg1 forKey:(CFStringRef)arg2 toDictionaryRef:(CFDictionaryRef)arg3 ;
-(void)addDefaultAppearanceDictionaryRef:(CFDictionaryRef)arg1 ;
-(BOOL)addDestinationToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addFlagsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addHighlightingModeToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addInkListToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addLineToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addLineEndingStylesToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addModificationDateToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addNameToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addOpenToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addPopupToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addQuaddingToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addQuadPointsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addTextLabelToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addDefaultFieldValueToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addFieldFlagsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addFieldTypeToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addMaxLenToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addAppearanceCharacteristicsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addOptionsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addAlternateFieldNameToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addFieldValueToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)_addUnknownPropertiesToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)drawAppearance:(CGPDFFormRef)arg1 withBox:(long long)arg2 inContext:(CGContextRef)arg3 scaleProportional:(BOOL)arg4 ;
-(void)drawAppearance:(CGPDFFormRef)arg1 withBox:(long long)arg2 inContext:(CGContextRef)arg3 inRect:(CGRect)arg4 scaleProportional:(BOOL)arg5 ;
-(void)_drawAnnotationWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithBounds:(CGRect)arg1 forType:(id)arg2 withProperties:(id)arg3 ;
-(id)initWithDictionary:(id)arg1 forPage:(id)arg2 ;
-(void)setupAKAnnotationAdaptorIfNecessary;
-(void)setPopup:(PDFAnnotation *)arg1 ;
-(void)setShouldBurnIn:(BOOL)arg1 ;
-(void)setMouseHoverBackgroundColor:(id)arg1 ;
-(BOOL)shouldComb;
-(void)setAccessibilityNode:(id)arg1 ;
-(void)setIsFullyConstructed:(BOOL)arg1 ;
-(void)printDictionaryKeyValues;
-(id)mouseUpAction;
-(void)setMouseUpAction:(id)arg1 ;
-(BOOL)hasAppearanceStream;
-(void)removeAllAppearanceStreams;
-(CFDictionaryRef)dictionaryRefExcludingParentOrPopup;
-(void)setCGPDFAnnotation:(CGPDFAnnotationRef)arg1 ;
-(id)newUserControlWithFrame:(CGRect)arg1 ;
-(BOOL)updatesBoundsFromUserControlBounds;
-(BOOL)supportsNSCoding;
-(void)setMouseDownAction:(id)arg1 ;
-(BOOL)isWidgetOrMarkupAnnotation;
-(id)_accessibilityTypeString;
-(void)addPageReferenceToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addFieldNameToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)createDefaultAppearanceStringWithFont:(id)arg1 fontColor:(id)arg2 ;
-(BOOL)popupDrawsCloseWidget;
-(void)setPopupDrawsCloseWidget:(BOOL)arg1 ;
-(BOOL)popupDrawsText;
-(void)setPopupDrawsText:(BOOL)arg1 ;
-(CGPath*)cgPathArray;
-(void)setCGPathArray:(CGPath*)arg1 ;
-(id)replaceTextWidgetWithString:(id)arg1 ;
-(void)drawAppearance:(CGPDFFormRef)arg1 withBox:(long long)arg2 inContext:(CGContextRef)arg3 ;
-(void)derotateContext:(CGContextRef)arg1 ;
-(CFDictionaryRef)gcCreateAttributesForFont:(id)arg1 color:(id)arg2 ;
-(void)addToPageView;
-(void)removeFromPageView;
-(void)updateFormData;
-(void)setStartLineStyle:(long long)arg1 ;
-(void)setEndLineStyle:(long long)arg1 ;
-(void)setReadOnlyAnnotation:(BOOL)arg1 ;
-(void)setContentsLocked:(BOOL)arg1 ;
-(NSString *)widgetStringValue;
-(NSString *)widgetDefaultStringValue;
-(BOOL)shouldDisplay;
-(BOOL)isListChoice;
-(long long)markupType;
-(NSString *)widgetFieldType;
-(BOOL)_boolValueForAnnotationFlag:(unsigned long long)arg1 ;
-(void)_setBoolValue:(BOOL)arg1 forAnnotationFlag:(unsigned long long)arg2 ;
-(BOOL)_boolValueForWidgetFieldFlag:(unsigned long long)arg1 ;
-(void)_setBoolValue:(BOOL)arg1 forWidgetFieldFlag:(unsigned long long)arg2 ;
-(id)_textForValue:(id)arg1 ;
-(UIColor *)interiorColor;
-(void)setInteriorColor:(UIColor *)arg1 ;
-(void)setMarkupType:(long long)arg1 ;
-(void)setWidgetFieldType:(NSString *)arg1 ;
-(BOOL)shouldPrint;
-(BOOL)shouldNotZoom;
-(void)setShouldNotZoom:(BOOL)arg1 ;
-(BOOL)shouldNotRotate;
-(void)setShouldNotRotate:(BOOL)arg1 ;
-(void)setShouldDisplay:(BOOL)arg1 ;
-(BOOL)isReadOnlyAnnotation;
-(BOOL)shouldToggleNoView;
-(void)setShouldToggleNoView:(BOOL)arg1 ;
-(BOOL)contentsLocked;
-(void)setComb:(BOOL)arg1 ;
-(void)setWidgetDefaultStringValue:(NSString *)arg1 ;
-(BOOL)allowsToggleToOff;
-(void)setAllowsToggleToOff:(BOOL)arg1 ;
-(BOOL)radiosInUnison;
-(void)setRadiosInUnison:(BOOL)arg1 ;
-(void)setListChoice:(BOOL)arg1 ;
-(void)setChoices:(NSArray *)arg1 ;
-(NSString *)buttonWidgetStateString;
-(void)setButtonWidgetStateString:(NSString *)arg1 ;
-(NSString *)stampName;
-(void)setStampName:(NSString *)arg1 ;
-(void)addBezierPath:(id)arg1 ;
-(void)removeBezierPath:(id)arg1 ;
-(BOOL)shouldBurnIn;
-(BOOL)isMultiline;
-(void)setMultiline:(BOOL)arg1 ;
-(void)setInvisible:(BOOL)arg1 ;
-(UIColor *)fontColor;
-(long long)maximumLength;
-(void)setFontColor:(UIColor *)arg1 ;
-(id)control;
-(void)setControl:(id)arg1 ;
-(BOOL)isOpen;
-(void)setParent:(id)arg1 ;
-(CGPoint)endPoint;
-(BOOL)isInvisible;
-(BOOL)isReadOnly;
-(void)setMaximumLength:(long long)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(void)setOpen:(BOOL)arg1 ;
-(void)setForExport:(BOOL)arg1 ;
-(BOOL)forExport;
-(NSArray *)choices;
-(id)toolTip;
-(PDFBorder *)border;
-(void)setBorder:(PDFBorder *)arg1 ;
-(long long)alignment;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)bounds;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(PDFAction *)action;
-(NSString *)type;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setAlignment:(long long)arg1 ;
-(void)setAction:(PDFAction *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(BOOL)isSelected;
-(NSString *)contents;
-(void)setContents:(NSString *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setDestination:(PDFDestination *)arg1 ;
-(PDFDestination *)destination;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(CGPoint)startPoint;
-(id)debugQuickLookObject;
-(PDFPage *)page;
-(void)setPage:(PDFPage *)arg1 ;
-(id)parent;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)commonInit;
-(NSArray *)values;
@end
