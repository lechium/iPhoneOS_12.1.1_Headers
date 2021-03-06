/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CompassUI/CompassUI-Structs.h>
@class NSArray, NSString;

@interface CompassShader : NSObject {

	map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > >* _uniforms;
	NSArray* _uniformNames;
	NSString* _fragmentName;
	NSString* _vertexName;
	unsigned _program;

}

@property (assign,nonatomic) unsigned program;              //@synthesize program=_program - In the implementation block
-(unsigned)program;
-(void)setProgram:(unsigned)arg1 ;
-(int)locationForUniform:(id)arg1 ;
-(id)initWithFragmentName:(id)arg1 vertexName:(id)arg2 uniformNames:(id)arg3 ;
-(BOOL)loadShader;
-(BOOL)compileShader:(unsigned*)arg1 type:(unsigned)arg2 file:(id)arg3 ;
-(BOOL)linkProgram:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 uniformNames:(id)arg2 ;
-(BOOL)validateProgram:(unsigned)arg1 ;
-(void)dealloc;
-(void)use;
@end

