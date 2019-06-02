/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLImageTable;

@interface PLImageTableSegment : NSObject {

	PLImageTable* _imageTable;
	unsigned long long _index;
	void* _ptr;
	unsigned long long _length;
	BOOL _dying;

}
-(id)initWithImageTable:(id)arg1 index:(unsigned long long)arg2 length:(unsigned long long)arg3 idealAddress:(void*)arg4 ;
-(id)initWithImageTable:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3 ;
-(void)dealloc;
-(oneway void)release;
-(void*)bytes;
@end
