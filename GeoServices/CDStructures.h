/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct _ExpEntry {
    struct _GEOTileKey _field1;
    double _field2;
    struct _ExpEntry *_field3;
    struct _ExpEntry *_field4;
};

struct _GEOTileKey {
    unsigned int z:6;
    unsigned int x:26;
    unsigned int y:26;
    unsigned int type:6;
    unsigned int pixelSize:8;
    unsigned int textScale:8;
    unsigned int provider:8;
    unsigned int expires:1;
    unsigned int reserved1:7;
    unsigned char reserved2[4];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} CDStruct_11f37819;

typedef struct {
    long long *list;
    unsigned int count;
    unsigned int size;
} CDStruct_815f15fd;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    CDStruct_2c43369c _field1;
    double _field2;
    double _field3;
} CDStruct_4957f2b9;

