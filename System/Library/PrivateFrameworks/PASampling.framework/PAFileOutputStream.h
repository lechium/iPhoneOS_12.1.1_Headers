/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PAOutputStream.h>

@interface PAFileOutputStream : PAOutputStream {

	_sFILE* _outputFileStream;

}

@property (nonatomic,readonly) _sFILE* outputFileStream;              //@synthesize outputFileStream=_outputFileStream - In the implementation block
-(int)printWithFormat:(const char*)arg1 ;
-(id)initWithFileStream:(_sFILE*)arg1 ;
-(_sFILE*)outputFileStream;
@end
