/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHRecognizer;

@interface RecognizerProvider : NSObject {

	int _recognitionType;
	CHRecognizer* _recognizer;
	/*^block*/id _recognizerDidLoadBlock;

}

@property (readonly) int recognitionType;                    //@synthesize recognitionType=_recognitionType - In the implementation block
@property (readonly) CHRecognizer * recognizer;              //@synthesize recognizer=_recognizer - In the implementation block
@property (copy) id recognizerDidLoadBlock;                  //@synthesize recognizerDidLoadBlock=_recognizerDidLoadBlock - In the implementation block
-(int)recognitionType;
-(void)unloadRecognizer;
-(id)recognizerDidLoadBlock;
-(id)initWithRecognitionType:(int)arg1 ;
-(void)provideRecognizerToBlock:(/*^block*/id)arg1 ;
-(void)setRecognizerDidLoadBlock:(id)arg1 ;
-(void)dealloc;
-(CHRecognizer *)recognizer;
@end

