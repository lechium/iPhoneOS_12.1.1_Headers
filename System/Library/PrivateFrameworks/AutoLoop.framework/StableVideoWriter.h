/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AutoLoop/AutoLoop-Structs.h>
#import <libobjc.A.dylib/VideoFrameWriterProgressRecipient.h>

@protocol VideoFrameWriterProgressRecipient;
@class AVAsset, NSString, VideoFrameWriterQueue, AVAssetReader, ICHomographyWrapper, NSArray, NSConditionLock, NSError;

@interface StableVideoWriter : NSObject <VideoFrameWriterProgressRecipient> {

	ImageFeatureMatchParamRec featureMatchParams;
	BOOL useLimitedTimes;
	BOOL shouldUseReferenceFrame;
	BOOL didSkipFrames;
	int doingAnalyze;
	int doingStabilize;
	float featureImageScale;
	unsigned smoothKernelLength;
	int smoothKernelGaussian;
	float smoothFactor;
	int removeAllMotion;
	int doCrop;
	int shouldDrawFeaturePoints;
	int shouldStampFrameInfo;
	int doRemapAnalyze;
	int passThruStabilize;
	int _cancelingAnalyze;
	int _cancelingStabilize;
	float _progressAmount;
	AVAsset* sourceMovieAsset;
	id progressIndicator;
	NSString* movieOutPath;
	id<VideoFrameWriterProgressRecipient> frameWriterUpdateCallback;
	VideoFrameWriterQueue* frameWriter;
	AVAssetReader* inputMovieReader;
	unsigned long long frameWriteBlockSize;
	ICHomographyWrapper* smoothedTargetHomographies;
	NSArray* frameSkipArray;
	VideoHomographyAnalyzer* _analyzer;
	NSConditionLock* _movieReaderReadyLock;
	NSArray* _featureExtractionPixelFormatArray;
	NSArray* _videoStabilizationPixelFormatArray;
	NSError* _movieReaderError;
	CGSize _sourceMovieDimensions;
	SCD_Struct_Pr1 limitedTimeStart;
	SCD_Struct_Pr1 limitedTimeEnd;
	SCD_Struct_Pr1 _referenceFrameTime;
	CGRect cropRect;
	CGAffineTransform inputTrackTransform;

}

@property (retain) ICHomographyWrapper * smoothedTargetHomographies; 
@property (retain) NSError * movieReaderError;                                                   //@synthesize movieReaderError=_movieReaderError - In the implementation block
@property (assign,nonatomic) int doRemapAnalyze; 
@property (assign,nonatomic) VideoHomographyAnalyzer* analyzer;                                  //@synthesize analyzer=_analyzer - In the implementation block
@property (nonatomic,retain) AVAsset * sourceMovieAsset; 
@property (assign,nonatomic) CGSize sourceMovieDimensions;                                       //@synthesize sourceMovieDimensions=_sourceMovieDimensions - In the implementation block
@property (assign,nonatomic) float featureImageScale; 
@property (assign) int passThruStabilize; 
@property (assign) int doingAnalyze; 
@property (assign) int doingStabilize; 
@property (assign) int cancelingAnalyze;                                                         //@synthesize cancelingAnalyze=_cancelingAnalyze - In the implementation block
@property (assign) int cancelingStabilize;                                                       //@synthesize cancelingStabilize=_cancelingStabilize - In the implementation block
@property (__weak) id progressIndicator; 
@property (__weak) id<VideoFrameWriterProgressRecipient> frameWriterUpdateCallback; 
@property (assign) float progressAmount;                                                         //@synthesize progressAmount=_progressAmount - In the implementation block
@property (nonatomic,retain) NSString * movieOutPath; 
@property (nonatomic,retain) VideoFrameWriterQueue * frameWriter; 
@property (retain) AVAssetReader * inputMovieReader; 
@property (nonatomic,retain) NSConditionLock * movieReaderReadyLock;                             //@synthesize movieReaderReadyLock=_movieReaderReadyLock - In the implementation block
@property (assign,nonatomic) unsigned long long frameWriteBlockSize; 
@property (assign,nonatomic) int removeAllMotion; 
@property (assign,nonatomic) CGRect cropRect; 
@property (assign,nonatomic) int doCrop; 
@property (assign,nonatomic) int shouldDrawFeaturePoints; 
@property (assign,nonatomic) int shouldStampFrameInfo; 
@property (assign,nonatomic) unsigned smoothKernelLength; 
@property (assign,nonatomic) int smoothKernelGaussian; 
@property (assign,nonatomic) float smoothFactor; 
@property (assign,nonatomic) BOOL useLimitedTimes; 
@property (assign,nonatomic) SCD_Struct_Pr1 limitedTimeStart; 
@property (assign,nonatomic) SCD_Struct_Pr1 limitedTimeEnd; 
@property (assign,nonatomic) CGAffineTransform inputTrackTransform; 
@property (assign,nonatomic) BOOL shouldUseReferenceFrame; 
@property (assign,nonatomic) SCD_Struct_Pr1 referenceFrameTime;                                  //@synthesize referenceFrameTime=_referenceFrameTime - In the implementation block
@property (retain) NSArray * frameSkipArray; 
@property (assign,nonatomic) BOOL didSkipFrames; 
@property (nonatomic,retain) NSArray * featureExtractionPixelFormatArray;                        //@synthesize featureExtractionPixelFormatArray=_featureExtractionPixelFormatArray - In the implementation block
@property (nonatomic,retain) NSArray * videoStabilizationPixelFormatArray;                       //@synthesize videoStabilizationPixelFormatArray=_videoStabilizationPixelFormatArray - In the implementation block
-(VideoHomographyAnalyzer*)analyzer;
-(void)setAnalyzer:(VideoHomographyAnalyzer*)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(CGRect)cropRect;
-(void)setProgressAmount:(float)arg1 ;
-(void)updateCallbackForFrameIndex:(unsigned long long)arg1 withPixelBuffer:(CVBufferRef)arg2 ;
-(void)setInputTrackTransform:(CGAffineTransform)arg1 ;
-(BOOL)useLimitedTimes;
-(SCD_Struct_Pr1)limitedTimeStart;
-(SCD_Struct_Pr1)limitedTimeEnd;
-(void)setInputMovieReader:(AVAssetReader *)arg1 ;
-(void)setCancelingStabilize:(int)arg1 ;
-(void)beginReadingMovie:(id)arg1 pixelFormatArray:(id)arg2 withScale:(float)arg3 ;
-(void)waitForMovieReaderReady;
-(void)UpdateProgressWithTime:(SCD_Struct_Pr1)arg1 inTimeRange:(SCD_Struct_Pr2)arg2 ;
-(NSString *)movieOutPath;
-(id)GenerateTempVideoFilePath;
-(void)setMovieOutPath:(NSString *)arg1 ;
-(CGAffineTransform)inputTrackTransform;
-(void)setFrameWriter:(VideoFrameWriterQueue *)arg1 ;
-(VideoFrameWriterQueue *)frameWriter;
-(void)setFrameWriterUpdateCallback:(id<VideoFrameWriterProgressRecipient>)arg1 ;
-(opaqueCMSampleBufferRef)readNextMovieSampleBuffer;
-(int)shouldDrawFeaturePoints;
-(void)drawFeaturePoints:(vector<ImageFeaturePair, std::__1::allocator<ImageFeaturePair> >*)arg1 toCVPixelBuffer:(CVBufferRef)arg2 featureScale:(float)arg3 ;
-(int)shouldStampFrameInfo;
-(void)tagFramePixelBuffer:(CVBufferRef)arg1 withString:(id)arg2 ;
-(int)cancelingStabilize;
-(void)setCancelingAnalyze:(int)arg1 ;
-(BOOL)shouldUseReferenceFrame;
-(int)doRemapAnalyze;
-(void)FetchReferenceFrame;
-(void)setDoingAnalyze:(int)arg1 ;
-(void)StartAnalyzerForRemap;
-(void)StartAnalyzer;
-(short)FeedMovieFramesToAnalyzer;
-(int)cancelingAnalyze;
-(BOOL)shouldDropFrameAtTime:(SCD_Struct_Pr1)arg1 ;
-(int)removeAllMotion;
-(BOOL)FindFrameTimeIndexInHomographies:(HomographyRecordVector*)arg1 timeStamp:(SCD_Struct_Pr1)arg2 indexOut:(unsigned long long*)arg3 ;
-(void)setSmoothedTargetHomographies:(ICHomographyWrapper *)arg1 ;
-(AVAsset *)sourceMovieAsset;
-(void)setDoingStabilize:(int)arg1 ;
-(void)WriteVideoWithHomographies_SingleThread:(HomographyRecordVector*)arg1 chainHomographies:(BOOL)arg2 passThruStabilization:(BOOL)arg3 ;
-(SCD_Struct_Pr1)SingleFrameTimeForVideoTrack:(id)arg1 ;
-(CVBufferRef)newPixelBufferFromCGImage:(CGImageRef)arg1 ;
-(void)FindCropBoundsForHomographies:(HomographyRecordVector*)arg1 startIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3 ;
-(void)StabilizeVideo;
-(void)cancelStabilize;
-(ImageFeatureMatchParamRec*)getFeatureMatchParams;
-(BOOL)CanDoTripodFromRemaps:(HomographyRecordVector*)arg1 ;
-(int)doingAnalyze;
-(int)doingStabilize;
-(float)featureImageScale;
-(void)setFeatureImageScale:(float)arg1 ;
-(unsigned)smoothKernelLength;
-(void)setSmoothKernelLength:(unsigned)arg1 ;
-(int)smoothKernelGaussian;
-(void)setSmoothKernelGaussian:(int)arg1 ;
-(float)smoothFactor;
-(void)setSmoothFactor:(float)arg1 ;
-(id<VideoFrameWriterProgressRecipient>)frameWriterUpdateCallback;
-(AVAssetReader *)inputMovieReader;
-(unsigned long long)frameWriteBlockSize;
-(void)setFrameWriteBlockSize:(unsigned long long)arg1 ;
-(int)doCrop;
-(void)setShouldDrawFeaturePoints:(int)arg1 ;
-(int)passThruStabilize;
-(void)setPassThruStabilize:(int)arg1 ;
-(NSArray *)frameSkipArray;
-(void)setDidSkipFrames:(BOOL)arg1 ;
-(void)setSourceMovieDimensions:(CGSize)arg1 ;
-(NSConditionLock *)movieReaderReadyLock;
-(void)setMovieReaderReadyLock:(NSConditionLock *)arg1 ;
-(NSArray *)featureExtractionPixelFormatArray;
-(void)setFeatureExtractionPixelFormatArray:(NSArray *)arg1 ;
-(NSArray *)videoStabilizationPixelFormatArray;
-(void)setVideoStabilizationPixelFormatArray:(NSArray *)arg1 ;
-(NSError *)movieReaderError;
-(void)setMovieReaderError:(NSError *)arg1 ;
-(void)setUseLimitedTimes:(BOOL)arg1 ;
-(void)setLimitedTimeStart:(SCD_Struct_Pr1)arg1 ;
-(void)setLimitedTimeEnd:(SCD_Struct_Pr1)arg1 ;
-(BOOL)CanDoTripodFromHomographies:(HomographyRecordVector*)arg1 firstFrame:(unsigned long long)arg2 lastFrame:(unsigned long long)arg3 refFrame:(unsigned long long)arg4 cropRectOut:(FloatRect*)arg5 ;
-(float)progressAmount;
-(void)cancelAnalyze;
-(void)setFrameSkipArray:(NSArray *)arg1 ;
-(void)setReferenceFrameTime:(SCD_Struct_Pr1)arg1 ;
-(void)setSourceMovieAsset:(AVAsset *)arg1 ;
-(void)setShouldStampFrameInfo:(int)arg1 ;
-(void)setShouldUseReferenceFrame:(BOOL)arg1 ;
-(void)setDoCrop:(int)arg1 ;
-(void)setRemoveAllMotion:(int)arg1 ;
-(void)setDoRemapAnalyze:(int)arg1 ;
-(short)FindSourceMovieHomographies;
-(BOOL)haveDirectModeHomographies;
-(HomographyRecordVector*)GetRemapHomographies;
-(BOOL)haveSourceHomographies;
-(HomographyRecordVector*)GetSourceHomographies;
-(CGSize)sourceMovieDimensions;
-(BOOL)didSkipFrames;
-(id)ComputeTripodOutputHomographies:(HomographyRecordVector*)arg1 firstFrame:(long long)arg2 lastFrame:(long long)arg3 cropRectOut:(CGRect*)arg4 ;
-(BOOL)ComputeStabilizedOutputHomographies;
-(ICHomographyWrapper *)smoothedTargetHomographies;
-(void)SetMinimumTripodCropRatio:(float)arg1 ;
-(void)updateVideoProgress;
-(SCD_Struct_Pr1)referenceFrameTime;
-(id)progressIndicator;
-(void)setProgressIndicator:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
@end

