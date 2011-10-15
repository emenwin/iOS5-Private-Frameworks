/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct NSObject {
    Class _field1;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

#pragma mark Typedef'd Structures

typedef struct {
    char _field1;
    char _field2;
    char _field3;
    char _field4;
    float _field5;
    int _field6;
} CDStruct_af7d35ee;

typedef struct {
    int version;
    void *info;
    void *retain;
    void *release;
    void *copyDescription;
} CDStruct_304912e7;

typedef struct {
    int _field1;
    int _field2;
    id _field3;
    id _field4;
    float _field5;
    int _field6;
    SEL _field7;
    id _field8;
} CDStruct_dbaf35c5;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    char _field7;
} CDStruct_3ff5127f;

typedef struct {
    CDStruct_2c43369c center;
    struct {
        double latitudeDelta;
        double longitudeDelta;
    } span;
} CDStruct_feeb6407;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

