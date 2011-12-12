/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/SDKs/MacOSX10.7.sdk
 */

#import <Cocoa/Cocoa.h>
#import "PKBOMDirectoryEnumerator.h"

@class NSData;

@interface PKBOM : NSObject
{
    NSData *_bomData;
    struct _BOMBom *_BOMBom;
}

//+ (id)_NSFileTypeFromBOMFSObjType:(int)arg1;
//+ (id)_attributesOfBOMFSObject:(struct _BOMFSObject *)arg1;
//+ (BOOL)_setAttributes:(id)arg1 ofBOMFSObject:(struct _BOMFSObject *)arg2;
//- (id)initWithBOMPath:(id)arg1;
//- (id)initWithBOMData:(id)arg1;
//- (void)finalize;
//- (void)dealloc;
//- (struct _BOMBom *)BOMBom;
//- (id)attributesOfItemAtPath:(id)arg1;
////- (id)directoryEnumerator;
//- (id)subpathsOfDirectoryAtPath:(id)arg1;
//- (unsigned long long)fileCount;
//- (unsigned long long)totalSize;

- (PKBOMDirectoryEnumerator *)directoryEnumerator;
- (unsigned long long)fileCount;

@end

