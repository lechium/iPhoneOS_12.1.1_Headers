/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDImageColorHistogram, TDPNGAsset, NSOrderedSet, TDThemeCompressionType, NSString;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec {

	CGRect _alignmentRect;
	BOOL _isBackstop;
	TDImageColorHistogram* _histogram;

}

@property (assign,nonatomic) BOOL allowsMultiPassEncoding; 
@property (assign,nonatomic) BOOL allowsOptimalRowbytesPacking; 
@property (assign,nonatomic) BOOL allowsCompactCompression; 
@property (assign,nonatomic) BOOL allowsPaletteImageCompression; 
@property (assign,nonatomic) BOOL allowsHevcCompression; 
@property (assign,nonatomic) BOOL allowsDeepmapCompression; 
@property (nonatomic,retain) TDPNGAsset * asset; 
@property (nonatomic,retain) NSOrderedSet * slices; 
@property (nonatomic,retain) TDThemeCompressionType * compressionType; 
@property (nonatomic,retain) TDImageColorHistogram * histogram;                     //@synthesize histogram=_histogram - In the implementation block
@property (assign,nonatomic) CGRect alignmentRect; 
@property (assign,nonatomic) CGRect primitiveAlignmentRect; 
@property (nonatomic,retain) NSString * alignmentRectString; 
@property (nonatomic,retain) NSString * originalImageSizeString; 
@property (nonatomic,retain) NSString * nonAlphaImageAreaString; 
@property (nonatomic,retain) NSString * physicalSizeInMetersString; 
@property (assign,nonatomic) CGSize physicalSizeInMeters; 
@property (assign,nonatomic) BOOL isTintable; 
@property (assign,nonatomic) BOOL isBackstop;                                       //@synthesize isBackstop=_isBackstop - In the implementation block
@property (assign,nonatomic) double postScaleFactor; 
+(void)initialize;
-(void)setPhysicalSizeInMeters:(CGSize)arg1 ;
-(void)awakeFromFetch;
-(void)_logError:(id)arg1 ;
-(CGSize)physicalSizeInMeters;
-(CGRect)alignmentRect;
-(void)setAlignmentRect:(CGRect)arg1 ;
-(CGImageRef)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned*)arg3 vectorBased:(BOOL*)arg4 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg1 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(void)copyAttributesInto:(id)arg1 ;
-(id)associatedFileModificationDateWithDocument:(id)arg1 ;
-(void)_logWarning:(id)arg1 ;
-(void)_logExtra:(id)arg1 ;
-(void)drawPackableRenditionInContext:(CGContextRef)arg1 withDocument:(id)arg2 ;
-(id)_slicesToUseForCSI;
-(void)setIsBackstop:(BOOL)arg1 ;
-(CGRect)primitiveAlignmentRect;
-(void)setPrimitiveAlignmentRect:(CGRect)arg1 ;
-(int)_rawPixelFormatOfCGImage:(CGImageRef)arg1 ;
-(CGSize)_scaleRecognitionImageFromSize:(CGSize)arg1 ;
-(id)_sliceRectanglesForRenditionSize:(SCD_Struct_TD9)arg1 unadjustedSliceRectangles:(id*)arg2 imageSlicesNeedAdjustment:(BOOL*)arg3 newRenditionSize:(SCD_Struct_TD9*)arg4 ;
-(SCD_Struct_TD10)_edgeMetricsForAlignmentRect:(CGRect)arg1 originalRenditionSize:(SCD_Struct_TD9)arg2 newRenditionSize:(SCD_Struct_TD9)arg3 ;
-(BOOL)isBackstop;
-(void)setHistogram:(TDImageColorHistogram *)arg1 ;
-(TDImageColorHistogram *)histogram;
-(void)dealloc;
@end

